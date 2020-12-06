// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2021 Kazuki Hashimoto <kazukih@tuta.io>.
 */

struct spi_device;
int geni_spi_get_master_irq(struct spi_device *spi_slv);
