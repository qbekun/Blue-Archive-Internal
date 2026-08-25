#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_SHIMSEXTENSIONS_GETBYTES_OFFSET UNITYSDK_OFFSET(0xA4CE0B0)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CE170)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CE1B0)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CE390)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CE510)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CE690)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CE760)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CE810)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CE8C0)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CEA40)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CEBC0)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CECA0)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CED80)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CEE60)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CEF40)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CF020)
#define CYSHARP_TEXT_SHIMSEXTENSIONS_GETFORMAT_OFFSET UNITYSDK_OFFSET(0xA4CE330)

namespace Cysharp::Text
{
	inline static constexpr unsigned int ShimsExtensions_TypeDefinitionIndex = 34716;

	class ShimsExtensions : public Il2CppObject
	{
	public:
		::System::Int32 GetBytes(::System::Text::Encoding* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::System::Text::Encoding*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_GETBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Guid* arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Guid*, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::TimeSpan* arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::DateTime* arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::DateTimeOffset* arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTimeOffset*, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Decimal* arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Decimal*, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Single arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Single, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Double arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Double, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::SByte arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::SByte, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Int16 arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Int16, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Int32 arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Int64 arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Byte arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::UInt16 arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt16, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::UInt32 arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::UInt64 arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* GetFormat(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_SHIMSEXTENSIONS_GETFORMAT_OFFSET))(arg, nullptr);
		}

	};
}

