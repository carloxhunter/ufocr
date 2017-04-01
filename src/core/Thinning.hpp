/*
   UFOCR - User-Friendly OCR
   Copyright (C) 2017 Alexander Zaitsev <zamazan4ik@tut.by>

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

#ifndef UFOCR_THINNING_HPP
#define UFOCR_THINNING_HPP

#include "opencv2/core.hpp"

namespace IPL
{
    //TODO: Add Zhang-Suen and Guo-Hall support
    void thinningZhangSuen(const cv::Mat& src, cv::Mat& dst);
    void thinningGuoHall(const cv::Mat& src, cv::Mat& dst);
}

#endif //UFOCR_THINNING_HPP