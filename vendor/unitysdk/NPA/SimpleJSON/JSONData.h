#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONTextMode; }

#define NPA_SIMPLEJSON_JSONDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9CD1FF0)
#define NPA_SIMPLEJSON_JSONDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9CD2000)
#define NPA_SIMPLEJSON_JSONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD0D20)
#define NPA_SIMPLEJSON_JSONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD2010)
#define NPA_SIMPLEJSON_JSONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD2050)
#define NPA_SIMPLEJSON_JSONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD2090)
#define NPA_SIMPLEJSON_JSONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD20D0)
#define NPA_SIMPLEJSON_JSONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD2110)
#define NPA_SIMPLEJSON_JSONDATA_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x9CD2150)
#define NPA_SIMPLEJSON_JSONDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9CD2220)

namespace NPA::SimpleJSON
{
	inline static constexpr unsigned int JSONData_TypeDefinitionIndex = 27428;

	class JSONData : public Il2CppObject
	{
	public:
		::System::String* m_Data; // 0x10
		::System::Boolean isNumberic; // 0x18
		::System::Boolean isBoolean; // 0x19

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONDATA_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONDATA_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONDATA_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg, ::NPA::SimpleJSON::JSONTextMode* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::NPA::SimpleJSON::JSONTextMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONDATA_WRITETOSTRINGBUILDER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::System::IO::BinaryWriter* arg)
		{
			((::System::Void(*)(::System::IO::BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONDATA_SERIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

