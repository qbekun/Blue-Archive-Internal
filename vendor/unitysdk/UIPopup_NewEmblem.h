#pragma once
#include "unitysdk.h"

class UINewEmblemPopupScrollViewController;
namespace MX::NetworkProtocol { class AttachmentEmblemAcquireResponse; }

#define UIPOPUP_NEWEMBLEM_ONBACK_OFFSET UNITYSDK_OFFSET(0x23F0610)
#define UIPOPUP_NEWEMBLEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x23F0710)
#define UIPOPUP_NEWEMBLEM_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23F0720)
#define UIPOPUP_NEWEMBLEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x23F0810)
#define UIPOPUP_NEWEMBLEM__ONBACK_B__5_0_OFFSET UNITYSDK_OFFSET(0x23F0850)

	inline static constexpr unsigned int UIPopup_NewEmblem_TypeDefinitionIndex = 5412;

	class UIPopup_NewEmblem : public Il2CppObject
	{
	public:
		UINewEmblemPopupScrollViewController* controller; // 0xD8
		Il2CppObject* newEmblemIds; // 0xE0
		::System::Action* endCallback; // 0xE8

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NEWEMBLEM_ONBACK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NEWEMBLEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NEWEMBLEM_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NEWEMBLEM_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnBack_b__5_0(::MX::NetworkProtocol::AttachmentEmblemAcquireResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::AttachmentEmblemAcquireResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NEWEMBLEM__ONBACK_B__5_0_OFFSET))(arg, nullptr);
		}

	};

