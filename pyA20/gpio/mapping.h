// Copyright (c) 2017 Stefan Mavrodiev
//
// GNU GENERAL PUBLIC LICENSE
//    Version 3, 29 June 2007
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.


#ifndef __MAPPING_H
#define __MAPPING_H

#include "gpio_lib.h"

/**
 * Structure that describe all gpio
 */
typedef struct _pin {
	char name[10];       // The processor pin
	int offset;         // Memory offset for the pin
	int pin_number;     // Number on the connector
} pin_t;

typedef struct _gpio {
	char connector_name[10];
	pin_t pins[41];
} gpio_t;


gpio_t gpio[] = {
	{ "lcd",
		{
			{ "PD16", SUNXI_GPD(16),  5  },
			{ "PD17", SUNXI_GPD(17),  6  },
			{ "PD18", SUNXI_GPD(18),  7  },
			{ "PD19", SUNXI_GPD(19),  8  },
			{ "PD20", SUNXI_GPD(20),  9  },
			{ "PD21", SUNXI_GPD(21),  10 },
			{ "PD22", SUNXI_GPD(22),  11 },
			{ "PD23", SUNXI_GPD(23),  12 },
			{ "PD8",  SUNXI_GPD(8),	  13 },
			{ "PD9",  SUNXI_GPD(9),	  14 },
			{ "PD10", SUNXI_GPD(10),  15 },
			{ "PD11", SUNXI_GPD(11),  16 },
			{ "PD12", SUNXI_GPD(12),  17 },
			{ "PD13", SUNXI_GPD(13),  18 },
			{ "PD14", SUNXI_GPD(14),  19 },
			{ "PD15", SUNXI_GPD(15),  20 },
			{ "PD0",  SUNXI_GPD(0),	  21 },
			{ "PD1",  SUNXI_GPD(1),	  22 },
			{ "PD2",  SUNXI_GPD(2),	  23 },
			{ "PD3",  SUNXI_GPD(3),	  24 },
			{ "PD4",  SUNXI_GPD(4),	  25 },
			{ "PD5",  SUNXI_GPD(5),	  26 },
			{ "PD6",  SUNXI_GPD(6),	  27 },
			{ "PD7",  SUNXI_GPD(7),	  28 },
			{ "PD26", SUNXI_GPD(26),  29 },
			{ "PD27", SUNXI_GPD(27),  30 },
			{ "PD24", SUNXI_GPD(24),  31 },
			{ "PD25", SUNXI_GPD(25),  32 },
			{ "PH8",  SUNXI_GPH(8),	  35 },
			{ "PB2",  SUNXI_GPB(2),	  36 },
			{
				{ 0, 0, 0 },
			}

		}
	},

	{ "gpio1",
		{
			{ "PG0",  SUNXI_GPG(0),		5  },
			{ "PG1",  SUNXI_GPG(1),		7  },
			{ "PG2",  SUNXI_GPG(2),		9  },
			{ "PG3",  SUNXI_GPG(3),		11 },
			{ "PG4",  SUNXI_GPG(4),		13 },
			{ "PG5",  SUNXI_GPG(5),		15 },
			{ "PG6",  SUNXI_GPG(6),		17 },
			{ "PG7",  SUNXI_GPG(7),		19 },
			{ "PG8",  SUNXI_GPG(8),		21 },
			{ "PG9",  SUNXI_GPG(9),		23 },
			{ "PG10", SUNXI_GPG(10),	25 },
			{ "PG11", SUNXI_GPG(11),	27 },
			{
				{ 0, 0, 0 },
			},
		}
	},

	{ "gpio2",
		{
			{ "PE0",  SUNXI_GPE(0),	  6  },
			{ "PE1",  SUNXI_GPE(1),	  8  },
			{ "PI0",  SUNXI_GPI(0),	  9  },
			{ "PE2",  SUNXI_GPE(2),	  10 },
			{ "PI1",  SUNXI_GPI(1),	  11 },
			{ "PE3",  SUNXI_GPE(3),	  12 },
			{ "PI2",  SUNXI_GPI(2),	  13 },
			{ "PE4",  SUNXI_GPE(4),	  14 },
			{ "PI3",  SUNXI_GPI(3),	  15 },
			{ "PE5",  SUNXI_GPE(5),	  16 },
			{ "PI10", SUNXI_GPI(10),  17 },
			{ "PE6",  SUNXI_GPE(6),	  18 },
			{ "PI11", SUNXI_GPI(11),  19 },
			{ "PE7",  SUNXI_GPE(7),	  20 },
			{ "PC3",  SUNXI_GPC(3),	  21 },
			{ "PE8",  SUNXI_GPE(8),	  22 },
			{ "PC7",  SUNXI_GPC(7),	  23 },
			{ "PE9",  SUNXI_GPE(9),	  24 },
			{ "PC16", SUNXI_GPC(16),  25 },
			{ "PE10", SUNXI_GPE(10),  26 },
			{ "PC17", SUNXI_GPC(17),  27 },
			{ "PE11", SUNXI_GPE(11),  28 },
			{ "PC18", SUNXI_GPC(18),  29 },
			{ "PI14", SUNXI_GPI(14),  30 },
			{ "PC23", SUNXI_GPC(23),  31 },
			{ "PI15", SUNXI_GPI(15),  32 },
			{ "PC24", SUNXI_GPC(24),  33 },
			{ "PB23", SUNXI_GPB(23),  34 },
			{ "PB22", SUNXI_GPB(22),  36 },
			{
				{ 0, 0, 0 }
			},
		}
	},

	{ "gpio3",
		{
			{ "PH0",  SUNXI_GPH(0),	  5  },
			{ "PB3",  SUNXI_GPB(3),	  6  },
			{ "PH2",  SUNXI_GPH(2),	  7  },
			{ "PB4",  SUNXI_GPB(4),	  8  },
			{ "PH7",  SUNXI_GPH(7),	  9  },
			{ "PB5",  SUNXI_GPB(5),	  10 },
			{ "PH9",  SUNXI_GPH(9),	  11 },
			{ "PB6",  SUNXI_GPB(6),	  12 },
			{ "PH10", SUNXI_GPH(10),  13 },
			{ "PB7",  SUNXI_GPB(7),	  14 },
			{ "PH11", SUNXI_GPH(11),  15 },
			{ "PB8",  SUNXI_GPB(8),	  16 },
			{ "PH12", SUNXI_GPH(12),  17 },
			{ "PB10", SUNXI_GPB(10),  18 },
			{ "PH13", SUNXI_GPH(13),  19 },
			{ "PB11", SUNXI_GPB(11),  20 },
			{ "PH14", SUNXI_GPH(14),  21 },
			{ "PB12", SUNXI_GPB(12),  22 },
			{ "PH15", SUNXI_GPH(15),  23 },
			{ "PB13", SUNXI_GPB(13),  24 },
			{ "PH16", SUNXI_GPH(16),  25 },
			{ "PB14", SUNXI_GPB(14),  26 },
			{ "PH17", SUNXI_GPH(17),  27 },
			{ "PB15", SUNXI_GPB(15),  28 },
			{ "PH18", SUNXI_GPH(18),  29 },
			{ "PB16", SUNXI_GPB(16),  30 },
			{ "PH19", SUNXI_GPH(19),  31 },
			{ "PB17", SUNXI_GPB(17),  32 },
			{ "PH20", SUNXI_GPH(20),  33 },
			{ "PH24", SUNXI_GPH(24),  34 },
			{ "PH21", SUNXI_GPH(21),  35 },
			{ "PH25", SUNXI_GPH(25),  36 },
			{ "PH22", SUNXI_GPH(22),  37 },
			{ "PH26", SUNXI_GPH(26),  38 },
			{ "PH23", SUNXI_GPH(23),  39 },
			{ "PH27", SUNXI_GPH(27),  40 },
			{
				{ 0, 0, 0 }
			},
		}
	},

	{ "gpio4",
		{
			{ "PA0",  SUNXI_GPA(0),		13 },
			{ "PA1",  SUNXI_GPA(1),		11 },
			{ "PA2",  SUNXI_GPA(2),		22 },
			{ "PA3",  SUNXI_GPA(3),		15 },
			{ "PA6",  SUNXI_GPA(6),		7  },
			{ "PA7",  SUNXI_GPA(7),		12 },
			{ "PA10", SUNXI_GPA(10),	26 },
			{ "PA11", SUNXI_GPA(11),	5  },
			{ "PA12", SUNXI_GPA(12),	3  },
			{ "PA13", SUNXI_GPA(13),	24 },
			{ "PA14", SUNXI_GPA(14),	23 },
			{ "PA15", SUNXI_GPA(15),	19 },
			{ "PA16", SUNXI_GPA(16),	21 },
			{ "PA18", SUNXI_GPA(18),	18 },
			{ "PA19", SUNXI_GPA(19),	16 },
			{
				{ 0, 0, 0 },
			},
		}
	},

	{ "uext1",
		{
			{ "PI12", SUNXI_GPI(12),  3  },
			{ "PI13", SUNXI_GPI(13),  4  },
			{ "PB20", SUNXI_GPB(20),  5  },
			{ "PB21", SUNXI_GPB(21),  6  },
			{ "PC22", SUNXI_GPC(22),  7  },
			{ "PC21", SUNXI_GPC(21),  8  },
			{ "PC20", SUNXI_GPC(20),  9  },
			{ "PC19", SUNXI_GPC(19),  10 },
			{
				{ 0, 0, 0 }
			},
		}
	},

	{ "uext2",
		{
			{ "PI20", SUNXI_GPI(20),  3  },
			{ "PI21", SUNXI_GPI(21),  4  },
			{ "PB18", SUNXI_GPB(18),  5  },
			{ "PB19", SUNXI_GPB(19),  6  },
			{ "PI19", SUNXI_GPI(19),  7  },
			{ "PI18", SUNXI_GPI(18),  8  },
			{ "PI17", SUNXI_GPI(17),  9  },
			{ "PI16", SUNXI_GPI(16),  10 },
			{
				{ 0, 0, 0 }
			},
		}
	},
};



#endif
