/** AudioOut (libao wrapper)
 * Copyright (C) Madura A.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this program; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02111-1307, USA.
 */
#ifndef AUDIOOUT_H
#define AUDIOOUT_H

#include "driver.h"

#include "ao/ao.h"

namespace Vrok {

    class DriverAudioOut : public Driver
    {
    private:
        atomic<bool> _new_resource;
        ao_device *_ao_device;
    protected:
    public:
        DriverAudioOut();
        virtual ~DriverAudioOut() {}
        bool BufferConfigChange(BufferConfig *config);
        bool DriverRun(Buffer *buffer);
    };
}
#endif // AUDIOOUT_H
