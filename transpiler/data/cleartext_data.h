// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef FULLY_HOMOMORPHIC_ENCRYPTION_TRANSPILER_DATA_CLEARTEXT_DATA_H_
#define FULLY_HOMOMORPHIC_ENCRYPTION_TRANSPILER_DATA_CLEARTEXT_DATA_H_

#include <assert.h>
#include <stddef.h>
#include <stdint.h>

#include <string>
#include <type_traits>

#include "absl/base/casts.h"
#include "absl/container/fixed_array.h"
#include "absl/types/span.h"
#include "transpiler/data/cleartext_value.h"
#include "transpiler/data/primitives_cleartext.types.h"

// Corresponds to std::string
using EncodedString = EncodedArray<char>;
using EncodedStringRef = EncodedArrayRef<char>;
// Corresponds to char
using EncodedChar = Encoded<char>;
using EncodedCharRef = EncodedRef<char>;
// Corresponds to signed/unsigned char
using EncodedSignedChar = Encoded<signed char>;
using EncodedSignedCharRef = EncodedRef<signed char>;
using EncodedUnsignedChar = Encoded<unsigned char>;
using EncodedUnsignedCharRef = EncodedRef<unsigned char>;
// Corresponds to long
using EncodedLong = Encoded<signed long>;
using EncodedLongRef = EncodedRef<signed long>;
using EncodedUnsignedLong = Encoded<unsigned long>;
using EncodedUnsignedLongRef = EncodedRef<unsigned long>;
// Corresponds to int
using EncodedInt = Encoded<signed int>;
using EncodedIntRef = EncodedRef<signed int>;
using EncodedUnsignedInt = Encoded<unsigned int>;
using EncodedUnsignedIntRef = EncodedRef<unsigned int>;
// Corresponds to short
using EncodedShort = Encoded<signed short>;
using EncodedShortRef = EncodedRef<signed short>;
using EncodedUnsignedShort = Encoded<unsigned short>;
using EncodedUnsignedShortRef = EncodedRef<unsigned short>;
// Corresponds to bool
using EncodedBit = Encoded<bool>;
using EncodedBitRef = EncodedRef<bool>;
using EncodedBool = Encoded<bool>;
using EncodedBoolRef = EncodedRef<bool>;

#endif  // FULLY_HOMOMORPHIC_ENCRYPTION_TRANSPILER_DATA_CLEARTEXT_DATA_H_
