#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_INFACESDK_INFACERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE9240)
#define NPA_INFACESDK_INFACERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE9250)
#define NPA_INFACESDK_INFACERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE9450)
#define NPA_INFACESDK_INFACERESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CE9640)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int InfaceResult_TypeDefinitionIndex = 25796;

	class InfaceResult : public Il2CppObject
	{
	public:
		::System::String* to; // 0x10
		::System::String* action; // 0x18
		::System::String* from; // 0x20
		::System::Int32 status; // 0x28
		::NPA::SimpleJSON::JSONNode* data; // 0x30
		::NPA::SimpleJSON::JSONNode* error; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_INFACERESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_INFACERESULT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_INFACERESULT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_INFACERESULT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

