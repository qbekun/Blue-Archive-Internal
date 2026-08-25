#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_LINKINFO_GETLINKTEXT_OFFSET UNITYSDK_OFFSET(0xA11F460)
#define TMPRO_TMP_LINKINFO_GETLINKID_OFFSET UNITYSDK_OFFSET(0xA11F570)
#define TMPRO_TMP_LINKINFO_SETLINKID_OFFSET UNITYSDK_OFFSET(0xA11F600)

namespace TMPro
{
	inline static constexpr unsigned int TMP_LinkInfo_TypeDefinitionIndex = 33621;

	class TMP_LinkInfo : public Il2CppObject
	{
	public:
		::TMPro::TMP_Text* textComponent; // 0x10
		::System::Int32 hashCode; // 0x18
		::System::Int32 linkIdFirstCharacterIndex; // 0x1C
		::System::Int32 linkIdLength; // 0x20
		::System::Int32 linkTextfirstCharacterIndex; // 0x24
		::System::Int32 linkTextLength; // 0x28
		::Il2CppArray<::System::Object*>* linkID; // 0x30

		::System::String* GetLinkText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_LINKINFO_GETLINKTEXT_OFFSET))(nullptr);
		}

		::System::String* GetLinkID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_LINKINFO_GETLINKID_OFFSET))(nullptr);
		}

		::System::Void SetLinkID(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_LINKINFO_SETLINKID_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

