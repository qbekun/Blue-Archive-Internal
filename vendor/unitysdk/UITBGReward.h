#pragma once
#include "unitysdk.h"

class UITexture;
class MXButton;
namespace MX::Data { class ITBGEncounterInfo; }

#define UITBGREWARD__AWAKE_B__8_0_OFFSET UNITYSDK_OFFSET(0xB59C10)
#define UITBGREWARD_ONCANCELBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xB59D30)
#define UITBGREWARD__AWAKE_B__8_2_OFFSET UNITYSDK_OFFSET(0xB59D80)
#define UITBGREWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0xB59EA0)
#define UITBGREWARD_ONNEXTBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xB59FF0)
#define UITBGREWARD__AWAKE_B__8_1_OFFSET UNITYSDK_OFFSET(0xB5A260)
#define UITBGREWARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB5A380)
#define UITBGREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xB5A8F0)
#define UITBGREWARD_ONCOLLECTIONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xB5A900)

	inline static constexpr unsigned int UITBGReward_TypeDefinitionIndex = 8405;

	class UITBGReward : public Il2CppObject
	{
	public:
		Il2CppObject* NormalSet; // 0xD8
		Il2CppObject* CGSet; // 0xE0
		UITexture* ImageTexture; // 0xE8
		Il2CppObject* InfoLabel; // 0xF0
		Il2CppObject* ButtonLabel; // 0xF8
		Il2CppObject* NextButton; // 0x100
		Il2CppObject* CancelButton; // 0x108
		Il2CppObject* CollectionButton; // 0x110

		::System::Void _Awake_b__8_0(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARD__AWAKE_B__8_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnCancelButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARD_ONCANCELBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__8_2(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARD__AWAKE_B__8_2_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnNextButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARD_ONNEXTBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__8_1(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARD__AWAKE_B__8_1_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::MX::Data::ITBGEncounterInfo* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Data::ITBGEncounterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARD_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnCollectionButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARD_ONCOLLECTIONBUTTONCLICK_OFFSET))(nullptr);
		}

	};

