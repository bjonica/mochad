/*
 * Copyright 2010-2011 Brian Uechi <buasst@gmail.com>
 *
 * This file is part of mochad.
 *
 * mochad is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * mochad is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with mochad.  If not, see <http://www.gnu.org/licenses/>.
 */

struct SecEventRec {
    unsigned char funct;
    const char *name;
};

// Extern to avoid double-declaration complaints
extern int Cm19a;
extern int PollTimeOut;

/* 1 bit per house code, 1=RF to PL, 0=off, default all house codes on */
extern unsigned short RfToPl16;

extern unsigned short RfToRf16;


#define dbprintf(fmt, ...) _dbprintf(fmt, __FILE__,__LINE__, ## __VA_ARGS__)
int _dbprintf(const char *fmt, ...);

int write_usb(unsigned char *buf, size_t len);

int statusprintf(int fd, const char *fmt, ...);
int sockprintf(int fd, const char *fmt, ...);

void hexdump(void *p, size_t len);

void sockhexdump(int fd, void *p, size_t len);

void mh_sockhexdump(int fd, void *p, size_t len);

