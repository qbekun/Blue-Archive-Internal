#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class Animation; }

#define PUBLICSKILLDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x221D350)
#define PUBLICSKILLDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x221D3A0)
#define PUBLICSKILLDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x221D3B0)
#define PUBLICSKILLDIALOG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x221D500)
#define PUBLICSKILLDIALOG_RESETALLTWEENPOSITION_OFFSET UNITYSDK_OFFSET(0x221D580)
#define PUBLICSKILLDIALOG_SETDATA_OFFSET UNITYSDK_OFFSET(0x221D5E0)
#define PUBLICSKILLDIALOG_MOVE_OFFSET UNITYSDK_OFFSET(0x221D710)
#define PUBLICSKILLDIALOG_COPLAY_OFFSET UNITYSDK_OFFSET(0x221D490)

	inline static constexpr unsigned int PublicSkillDialog_TypeDefinitionIndex = 4419;

	class PublicSkillDialog : public Il2CppObject
	{
	public:
		UITexture* portrait; // 0x18
		UILabel* label; // 0x20
		::Il2CppArray<::System::Object*>* tweenPositions; // 0x28
		::UnityEngine::Animation* myAnimation; // 0x30
		::System::Int32 positionIndex; // 0x38

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUBLICSKILLDIALOG_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUBLICSKILLDIALOG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUBLICSKILLDIALOG_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUBLICSKILLDIALOG_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void ResetAllTweenPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUBLICSKILLDIALOG_RESETALLTWEENPOSITION_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Int64 arg2, ::System::UInt32 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + PUBLICSKILLDIALOG_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Move()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUBLICSKILLDIALOG_MOVE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PUBLICSKILLDIALOG_COPLAY_OFFSET))(nullptr);
		}

	};

