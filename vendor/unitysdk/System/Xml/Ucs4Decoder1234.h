#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_UCS4DECODER1234_GETFULLCHARS_OFFSET UNITYSDK_OFFSET(0x99C70B0)
#define SYSTEM_XML_UCS4DECODER1234_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C64C0)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Decoder1234_TypeDefinitionIndex = 27826;

	class Ucs4Decoder1234 : public Il2CppObject
	{
	public:
		::System::Int32 GetFullChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER1234_GETFULLCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER1234_.CTOR_OFFSET))(nullptr);
		}

	};
}

