#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_TEXTCORE_TEXT_LINKINFO_SETLINKID_OFFSET UNITYSDK_OFFSET(0xA2D51E0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int LinkInfo_TypeDefinitionIndex = 35572;

	class LinkInfo : public Il2CppObject
	{
	public:
		::System::Int32 hashCode; // 0x10
		::System::Int32 linkIdFirstCharacterIndex; // 0x14
		::System::Int32 linkIdLength; // 0x18
		::System::Int32 linkTextfirstCharacterIndex; // 0x1C
		::System::Int32 linkTextLength; // 0x20
		::Il2CppArray<::System::Object*>* linkId; // 0x28

		::System::Void SetLinkId(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_LINKINFO_SETLINKID_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

