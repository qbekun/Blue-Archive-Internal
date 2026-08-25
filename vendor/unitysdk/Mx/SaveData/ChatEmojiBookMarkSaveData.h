#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CHATEMOJIBOOKMARKSAVEDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D02750)
#define MX_SAVEDATA_CHATEMOJIBOOKMARKSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D027A0)
#define MX_SAVEDATA_CHATEMOJIBOOKMARKSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D02850)
#define MX_SAVEDATA_CHATEMOJIBOOKMARKSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D028D0)
#define MX_SAVEDATA_CHATEMOJIBOOKMARKSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D028E0)

namespace MX::SaveData
{
	inline static constexpr unsigned int ChatEmojiBookMarkSaveData_TypeDefinitionIndex = 19977;

	class ChatEmojiBookMarkSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* ChatEmojiBookMarkIdList; // 0x10

		::System::Boolean Contains(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHATEMOJIBOOKMARKSAVEDATA_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHATEMOJIBOOKMARKSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHATEMOJIBOOKMARKSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHATEMOJIBOOKMARKSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHATEMOJIBOOKMARKSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

