/*
	Copyright 2012-2014 Benjamin Vedder	benjamin@vedder.se

	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

/*
 * packet.h
 *
 *  Created on: 21 mar 2013
 *      Author: benjamin
 */

#ifndef PACKET_H_
#define PACKET_H_

#include <stdint.h>

// Functions
void packet_init(void (*s_func)(unsigned char *data, unsigned char len),
		void (*p_func)(unsigned char *data, unsigned char len));
void packet_process_byte(uint8_t rx_data);
void packet_timerfunc(void);
void packet_send_packet(unsigned char *data, unsigned char len);

#endif /* PACKET_H_ */
