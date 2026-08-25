#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYUIDIALOGCONTEXT_GET_DIALOGTAG_OFFSET UNITYSDK_OFFSET(0x9BBDBE0)
#define NPA_NXPTOYUIDIALOGCONTEXT_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9BBDBF0)
#define NPA_NXPTOYUIDIALOGCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBDC00)

namespace NPA
{
	inline static constexpr unsigned int NXPToyUIDialogContext_TypeDefinitionIndex = 25541;

	class NXPToyUIDialogContext : public Il2CppObject
	{
	public:
		::System::String* _DialogTag_k__BackingField; // 0x10
		::System::String* _ActivityID_k__BackingField; // 0x18

		::System::String* get_DialogTag()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYUIDIALOGCONTEXT_GET_DIALOGTAG_OFFSET))(nullptr);
		}

		::System::String* get_ActivityID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYUIDIALOGCONTEXT_GET_ACTIVITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYUIDIALOGCONTEXT_.CTOR_OFFSET))(str, str, nullptr);
		}

	};
}

