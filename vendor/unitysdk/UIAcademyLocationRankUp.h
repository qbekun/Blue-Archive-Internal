#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class MXButton;
namespace UnityEngine { class Texture; }

#define UIACADEMYLOCATIONRANKUP_ONBACK_OFFSET UNITYSDK_OFFSET(0x21B8DF0)
#define UIACADEMYLOCATIONRANKUP__ONOPENED_B__9_0_OFFSET UNITYSDK_OFFSET(0x21B8E30)
#define UIACADEMYLOCATIONRANKUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x21B8E60)
#define UIACADEMYLOCATIONRANKUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x21B8FE0)
#define UIACADEMYLOCATIONRANKUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x21B92C0)
#define UIACADEMYLOCATIONRANKUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x21B9310)

	inline static constexpr unsigned int UIAcademyLocationRankUp_TypeDefinitionIndex = 4208;

	class UIAcademyLocationRankUp : public Il2CppObject
	{
	public:
		UILabel* rankLabel; // 0xD8
		UITexture* expTexture; // 0xE0
		UILabel* rankInfo; // 0xE8
		MXButton* button; // 0xF0
		::System::Int64 locationId; // 0xF8
		::System::Int64 rank; // 0x100
		::System::Boolean hasUnlockedZone; // 0x108
		::System::Action* closedCallback; // 0x110

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONRANKUP_ONBACK_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_b__9_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONRANKUP__ONOPENED_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONRANKUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONRANKUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONRANKUP_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONRANKUP_.CTOR_OFFSET))(nullptr);
		}

	};

