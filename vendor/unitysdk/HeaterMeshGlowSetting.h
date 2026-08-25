#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace UnityEngine { class Renderer; }
class ChangeStatLogicApplicationGauge;

#define HEATERMESHGLOWSETTING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13BCA40)
#define HEATERMESHGLOWSETTING_CO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13BCC90)
#define HEATERMESHGLOWSETTING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13BCD20)
#define HEATERMESHGLOWSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BCDA0)
#define HEATERMESHGLOWSETTING_ONGAUGEDESTROY_OFFSET UNITYSDK_OFFSET(0x13BCE90)
#define HEATERMESHGLOWSETTING_ONBOOLVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x13BCF10)
#define HEATERMESHGLOWSETTING_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x13BD2E0)
#define HEATERMESHGLOWSETTING_GETGAUGE_OFFSET UNITYSDK_OFFSET(0x13BCC30)
#define HEATERMESHGLOWSETTING_AWAKE_OFFSET UNITYSDK_OFFSET(0x13BD3B0)

	inline static constexpr unsigned int HeaterMeshGlowSetting_TypeDefinitionIndex = 1019;

	class HeaterMeshGlowSetting : public Il2CppObject
	{
	public:
		Il2CppObject* formSettings; // 0x18
		CharacterVisual* CharacterVisual; // 0x20
		::UnityEngine::Renderer* ApplyRenderer; // 0x28
		Il2CppObject* ApplyMaterialIndexList; // 0x30
		::System::String* ShaderPropertyName; // 0x38
		::System::Int32 shaderPropertyID; // 0x40
		::System::Int32 lastSelectIndex; // 0x44

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEATERMESHGLOWSETTING_ONDISABLE_OFFSET))(nullptr);
		}

		Il2CppObject* Co_Initialize()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEATERMESHGLOWSETTING_CO_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEATERMESHGLOWSETTING_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEATERMESHGLOWSETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnGaugeDestroy(ChangeStatLogicApplicationGauge* arg)
		{
			((::System::Void(*)(ChangeStatLogicApplicationGauge*, ::PVOID))((::PBYTE)hIl2Cpp + HEATERMESHGLOWSETTING_ONGAUGEDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void OnBoolValueChanged(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + HEATERMESHGLOWSETTING_ONBOOLVALUECHANGED_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEATERMESHGLOWSETTING_ONVALIDATE_OFFSET))(nullptr);
		}

		ChangeStatLogicApplicationGauge* GetGauge()
		{
			return ((ChangeStatLogicApplicationGauge*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEATERMESHGLOWSETTING_GETGAUGE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEATERMESHGLOWSETTING_AWAKE_OFFSET))(nullptr);
		}

	};

