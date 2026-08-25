#pragma once
#include "unitysdk.h"

#define SUPPORTERPUBLICSKILLDIALOGPLAYER_MOVEALL_OFFSET UNITYSDK_OFFSET(0x221F390)
#define SUPPORTERPUBLICSKILLDIALOGPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x221F400)
#define SUPPORTERPUBLICSKILLDIALOGPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x221F450)
#define SUPPORTERPUBLICSKILLDIALOGPLAYER_SHOWPUBLICSKILLDIALOG_OFFSET UNITYSDK_OFFSET(0x221F460)

	inline static constexpr unsigned int SupporterPublicSkillDialogPlayer_TypeDefinitionIndex = 4426;

	class SupporterPublicSkillDialogPlayer : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* publicSkillDialogs; // 0x18
		::System::Int32 publicSkillDialogIndex; // 0x20

		::System::Void MoveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTERPUBLICSKILLDIALOGPLAYER_MOVEALL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTERPUBLICSKILLDIALOGPLAYER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTERPUBLICSKILLDIALOGPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ShowPublicSkillDialog(::System::Int64 arg, ::System::Int64 arg2, ::System::UInt32 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTERPUBLICSKILLDIALOGPLAYER_SHOWPUBLICSKILLDIALOG_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

