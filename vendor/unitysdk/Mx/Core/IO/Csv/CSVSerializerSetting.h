#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::IO::Csv { class CSVSerializerSetting; }

#define MX_CORE_IO_CSV_CSVSERIALIZERSETTING_GET_NULLVALUEREPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1037E60)
#define MX_CORE_IO_CSV_CSVSERIALIZERSETTING_SET_DELIMETER_OFFSET UNITYSDK_OFFSET(0x1037E70)
#define MX_CORE_IO_CSV_CSVSERIALIZERSETTING_GET_SERIALIZEHEADER_OFFSET UNITYSDK_OFFSET(0x1037E80)
#define MX_CORE_IO_CSV_CSVSERIALIZERSETTING_SET_NULLVALUEREPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1037E90)
#define MX_CORE_IO_CSV_CSVSERIALIZERSETTING_SET_SERIALIZEHEADER_OFFSET UNITYSDK_OFFSET(0x1037EA0)
#define MX_CORE_IO_CSV_CSVSERIALIZERSETTING_GET_DELIMETER_OFFSET UNITYSDK_OFFSET(0x1037EB0)
#define MX_CORE_IO_CSV_CSVSERIALIZERSETTING_SET_TOLOWERHEADER_OFFSET UNITYSDK_OFFSET(0x1037EC0)
#define MX_CORE_IO_CSV_CSVSERIALIZERSETTING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1037ED0)
#define MX_CORE_IO_CSV_CSVSERIALIZERSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x1037FA0)
#define MX_CORE_IO_CSV_CSVSERIALIZERSETTING_GET_TOLOWERHEADER_OFFSET UNITYSDK_OFFSET(0x1037FB0)

namespace MX::Core::IO::Csv
{
	inline static constexpr unsigned int CSVSerializerSetting_TypeDefinitionIndex = 12838;

	class CSVSerializerSetting : public Il2CppObject
	{
	public:
		::MX::Core::IO::Csv::CSVSerializerSetting* Default; // 0x0
		::System::Boolean _SerializeHeader_k__BackingField; // 0x10
		::System::Boolean _ToLowerHeader_k__BackingField; // 0x11
		::System::String* _Delimeter_k__BackingField; // 0x18
		::System::String* _NullValueReplacement_k__BackingField; // 0x20

		::System::String* get_NullValueReplacement()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVSERIALIZERSETTING_GET_NULLVALUEREPLACEMENT_OFFSET))(nullptr);
		}

		::System::Void set_Delimeter(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVSERIALIZERSETTING_SET_DELIMETER_OFFSET))(str, nullptr);
		}

		::System::Boolean get_SerializeHeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVSERIALIZERSETTING_GET_SERIALIZEHEADER_OFFSET))(nullptr);
		}

		::System::Void set_NullValueReplacement(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVSERIALIZERSETTING_SET_NULLVALUEREPLACEMENT_OFFSET))(str, nullptr);
		}

		::System::Void set_SerializeHeader(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVSERIALIZERSETTING_SET_SERIALIZEHEADER_OFFSET))(arg, nullptr);
		}

		::System::String* get_Delimeter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVSERIALIZERSETTING_GET_DELIMETER_OFFSET))(nullptr);
		}

		::System::Void set_ToLowerHeader(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVSERIALIZERSETTING_SET_TOLOWERHEADER_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVSERIALIZERSETTING_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVSERIALIZERSETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_ToLowerHeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVSERIALIZERSETTING_GET_TOLOWERHEADER_OFFSET))(nullptr);
		}

	};
}

