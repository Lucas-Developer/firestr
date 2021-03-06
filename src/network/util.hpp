/*
 * Copyright (C) 2014  Maxim Noah Khailo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give 
 * permission to link the code of portions of this program with the 
 * Botan library under certain conditions as described in each 
 * individual source file, and distribute linked combinations 
 * including the two.
 *
 * You must obey the GNU General Public License in all respects for 
 * all of the code used other than Botan. If you modify file(s) with 
 * this exception, you may extend this exception to your version of the 
 * file(s), but you are not obligated to do so. If you do not wish to do 
 * so, delete this exception statement from your version. If you delete 
 * this exception statement from all source files in the program, then 
 * also delete it here.
 */
#ifndef FIRESTR_NETWORK_UTIL_H
#define FIRESTR_NETWORK_UTIL_H

#include <string>
#include <memory>
#include <unordered_map>

#include <boost/cstdint.hpp>
#include <boost/asio.hpp>
#include <boost/asio.hpp>
#include <boost/dynamic_bitset.hpp>

#include "util/bytes.hpp"
#include "util/queue.hpp"

namespace fire 
{
    namespace network 
    {
        std::string get_lan_ip();
        std::string get_lan_ip(const std::string& override);

        using byte_queue = util::queue<util::bytes>;
        using asio_service_ptr = std::unique_ptr<boost::asio::io_service>;
    }
}

#endif
