// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Image.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Image.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define builtin_interfaces_msg_Time_max_cdr_typesize 8ULL;
#define sensor_msgs_msg_Image_max_cdr_typesize 648ULL;
#define std_msgs_msg_Header_max_cdr_typesize 268ULL;
#define builtin_interfaces_msg_Time_max_key_cdr_typesize 0ULL;
#define sensor_msgs_msg_Image_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Header_max_key_cdr_typesize 0ULL;

sensor_msgs::msg::Image::Image()
{
    // std_msgs::msg::Header m_header

    // unsigned long m_height
    m_height = 0;
    // unsigned long m_width
    m_width = 0;
    // string m_encoding
    m_encoding ="";
    // uint8 m_is_bigendian
    m_is_bigendian = 0;
    // unsigned long m_step
    m_step = 0;
    // sequence<uint8> m_data


}

sensor_msgs::msg::Image::~Image()
{







}

sensor_msgs::msg::Image::Image(
        const Image& x)
{
    m_header = x.m_header;
    m_height = x.m_height;
    m_width = x.m_width;
    m_encoding = x.m_encoding;
    m_is_bigendian = x.m_is_bigendian;
    m_step = x.m_step;
    m_data = x.m_data;
}

sensor_msgs::msg::Image::Image(
        Image&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_height = x.m_height;
    m_width = x.m_width;
    m_encoding = std::move(x.m_encoding);
    m_is_bigendian = x.m_is_bigendian;
    m_step = x.m_step;
    m_data = std::move(x.m_data);
}

sensor_msgs::msg::Image& sensor_msgs::msg::Image::operator =(
        const Image& x)
{

    m_header = x.m_header;
    m_height = x.m_height;
    m_width = x.m_width;
    m_encoding = x.m_encoding;
    m_is_bigendian = x.m_is_bigendian;
    m_step = x.m_step;
    m_data = x.m_data;

    return *this;
}

sensor_msgs::msg::Image& sensor_msgs::msg::Image::operator =(
        Image&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_height = x.m_height;
    m_width = x.m_width;
    m_encoding = std::move(x.m_encoding);
    m_is_bigendian = x.m_is_bigendian;
    m_step = x.m_step;
    m_data = std::move(x.m_data);

    return *this;
}

bool sensor_msgs::msg::Image::operator ==(
        const Image& x) const
{

    return (m_header == x.m_header && m_height == x.m_height && m_width == x.m_width && m_encoding == x.m_encoding && m_is_bigendian == x.m_is_bigendian && m_step == x.m_step && m_data == x.m_data);
}

bool sensor_msgs::msg::Image::operator !=(
        const Image& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::Image::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_Image_max_cdr_typesize;
}

size_t sensor_msgs::msg::Image::getCdrSerializedSize(
        const sensor_msgs::msg::Image& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.encoding().size() + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.data().size() > 0)
    {
        current_alignment += (data.data().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::Image::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_height;
    scdr << m_width;
    scdr << m_encoding.c_str();
    scdr << m_is_bigendian;
    scdr << m_step;
    scdr << m_data;

}

void sensor_msgs::msg::Image::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_height;
    dcdr >> m_width;
    dcdr >> m_encoding;
    dcdr >> m_is_bigendian;
    dcdr >> m_step;
    dcdr >> m_data;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void sensor_msgs::msg::Image::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void sensor_msgs::msg::Image::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& sensor_msgs::msg::Image::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& sensor_msgs::msg::Image::header()
{
    return m_header;
}
/*!
 * @brief This function sets a value in member height
 * @param _height New value for member height
 */
void sensor_msgs::msg::Image::height(
        uint32_t _height)
{
    m_height = _height;
}

/*!
 * @brief This function returns the value of member height
 * @return Value of member height
 */
uint32_t sensor_msgs::msg::Image::height() const
{
    return m_height;
}

/*!
 * @brief This function returns a reference to member height
 * @return Reference to member height
 */
uint32_t& sensor_msgs::msg::Image::height()
{
    return m_height;
}

/*!
 * @brief This function sets a value in member width
 * @param _width New value for member width
 */
void sensor_msgs::msg::Image::width(
        uint32_t _width)
{
    m_width = _width;
}

/*!
 * @brief This function returns the value of member width
 * @return Value of member width
 */
uint32_t sensor_msgs::msg::Image::width() const
{
    return m_width;
}

/*!
 * @brief This function returns a reference to member width
 * @return Reference to member width
 */
uint32_t& sensor_msgs::msg::Image::width()
{
    return m_width;
}

/*!
 * @brief This function copies the value in member encoding
 * @param _encoding New value to be copied in member encoding
 */
void sensor_msgs::msg::Image::encoding(
        const std::string& _encoding)
{
    m_encoding = _encoding;
}

/*!
 * @brief This function moves the value in member encoding
 * @param _encoding New value to be moved in member encoding
 */
void sensor_msgs::msg::Image::encoding(
        std::string&& _encoding)
{
    m_encoding = std::move(_encoding);
}

/*!
 * @brief This function returns a constant reference to member encoding
 * @return Constant reference to member encoding
 */
const std::string& sensor_msgs::msg::Image::encoding() const
{
    return m_encoding;
}

/*!
 * @brief This function returns a reference to member encoding
 * @return Reference to member encoding
 */
std::string& sensor_msgs::msg::Image::encoding()
{
    return m_encoding;
}
/*!
 * @brief This function sets a value in member is_bigendian
 * @param _is_bigendian New value for member is_bigendian
 */
void sensor_msgs::msg::Image::is_bigendian(
        uint8_t _is_bigendian)
{
    m_is_bigendian = _is_bigendian;
}

/*!
 * @brief This function returns the value of member is_bigendian
 * @return Value of member is_bigendian
 */
uint8_t sensor_msgs::msg::Image::is_bigendian() const
{
    return m_is_bigendian;
}

/*!
 * @brief This function returns a reference to member is_bigendian
 * @return Reference to member is_bigendian
 */
uint8_t& sensor_msgs::msg::Image::is_bigendian()
{
    return m_is_bigendian;
}

/*!
 * @brief This function sets a value in member step
 * @param _step New value for member step
 */
void sensor_msgs::msg::Image::step(
        uint32_t _step)
{
    m_step = _step;
}

/*!
 * @brief This function returns the value of member step
 * @return Value of member step
 */
uint32_t sensor_msgs::msg::Image::step() const
{
    return m_step;
}

/*!
 * @brief This function returns a reference to member step
 * @return Reference to member step
 */
uint32_t& sensor_msgs::msg::Image::step()
{
    return m_step;
}

/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void sensor_msgs::msg::Image::data(
        const std::vector<uint8_t>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void sensor_msgs::msg::Image::data(
        std::vector<uint8_t>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::vector<uint8_t>& sensor_msgs::msg::Image::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::vector<uint8_t>& sensor_msgs::msg::Image::data()
{
    return m_data;
}


size_t sensor_msgs::msg::Image::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_Image_max_key_cdr_typesize;
}

bool sensor_msgs::msg::Image::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::Image::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


