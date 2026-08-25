#pragma once
#include "unitysdk.h"

class CharacterHPBar;
class UISprite;
namespace UnityEngine { class Texture; }
class ChangeStatLogicApplicationGauge;

#define GAUGEUIVALUERECEIVER_ONBOOLVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x25EA8A0)
#define GAUGEUIVALUERECEIVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25EAA90)
#define GAUGEUIVALUERECEIVER_ONGAUGEDESTROY_OFFSET UNITYSDK_OFFSET(0x25EAC30)
#define GAUGEUIVALUERECEIVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x25EACB0)
#define GAUGEUIVALUERECEIVER_CO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25EABC0)
#define GAUGEUIVALUERECEIVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25EAE90)
#define GAUGEUIVALUERECEIVER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x25EAF20)

	inline static constexpr unsigned int GaugeUIValueReceiver_TypeDefinitionIndex = 6414;

	class GaugeUIValueReceiver : public Il2CppObject
	{
	public:
		CharacterHPBar* parent; // 0x18
		UISprite* sprite; // 0x20
		Il2CppObject* formTextures; // 0x28
		::System::Int32 lastSelectIndex; // 0x30
		::UnityEngine::Texture* defaultTexture; // 0x38

		::System::Void OnBoolValueChanged(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIVALUERECEIVER_ONBOOLVALUECHANGED_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIVALUERECEIVER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnGaugeDestroy(ChangeStatLogicApplicationGauge* arg)
		{
			((::System::Void(*)(ChangeStatLogicApplicationGauge*, ::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIVALUERECEIVER_ONGAUGEDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIVALUERECEIVER_ONDISABLE_OFFSET))(nullptr);
		}

		Il2CppObject* Co_Initialize()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIVALUERECEIVER_CO_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIVALUERECEIVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUGEUIVALUERECEIVER_ONVALIDATE_OFFSET))(nullptr);
		}

	};

