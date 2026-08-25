#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_ATTACHMENTFILTERSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9050)
#define MX_SAVEDATA_ATTACHMENTFILTERSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF9060)
#define MX_SAVEDATA_ATTACHMENTFILTERSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF90C0)
#define MX_SAVEDATA_ATTACHMENTFILTERSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF90D0)

namespace MX::SaveData
{
	inline static constexpr unsigned int AttachmentFilterSaveData_TypeDefinitionIndex = 19915;

	class AttachmentFilterSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* EmblemOwned; // 0x10
		Il2CppObject* EmblemCategory; // 0x18
		Il2CppObject* EmblemFavorRank; // 0x20
		Il2CppObject* EmblemSchool; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTFILTERSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTFILTERSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTFILTERSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ATTACHMENTFILTERSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

