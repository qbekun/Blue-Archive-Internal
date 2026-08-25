#pragma once
#include "../../unitysdk.h"

#define NEWTONSOFT_JSON_JSONNAMETABLE_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_JSONNAMETABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944A430)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonNameTable_TypeDefinitionIndex = 31693;

	class JsonNameTable : public Il2CppObject
	{
	public:
		::System::String* Get(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONNAMETABLE_GET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONNAMETABLE_.CTOR_OFFSET))(nullptr);
		}

	};
}

