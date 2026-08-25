#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYPUSHPOLICYCATEGORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBB900)
#define NPA_NXPTOYPUSHPOLICYCATEGORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBBAD0)
#define NPA_NXPTOYPUSHPOLICYCATEGORY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBC120)
#define NPA_NXPTOYPUSHPOLICYCATEGORY_TODICTIONARY_OFFSET UNITYSDK_OFFSET(0x9BBBF30)

namespace NPA
{
	inline static constexpr unsigned int NXPToyPushPolicyCategory_TypeDefinitionIndex = 25494;

	class NXPToyPushPolicyCategory : public Il2CppObject
	{
	public:
		::System::String* categoryId; // 0x10
		::System::String* title; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYPUSHPOLICYCATEGORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYPUSHPOLICYCATEGORY_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYPUSHPOLICYCATEGORY_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* ToDictionary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYPUSHPOLICYCATEGORY_TODICTIONARY_OFFSET))(nullptr);
		}

	};
}

