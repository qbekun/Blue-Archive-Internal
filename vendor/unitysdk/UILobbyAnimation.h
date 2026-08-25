#pragma once
#include "unitysdk.h"

class UILobbyAnimationElement;
namespace MX::Core::Math { class IRandomService; }
class UIWork;

#define UILOBBYANIMATION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2682920)
#define UILOBBYANIMATION_GET_PSEUDORANDOM_OFFSET UNITYSDK_OFFSET(0x2682B00)
#define UILOBBYANIMATION___N__0_OFFSET UNITYSDK_OFFSET(0x2682B10)
#define UILOBBYANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2682B20)
#define UILOBBYANIMATION_CLOSEANI_OFFSET UNITYSDK_OFFSET(0x2682BC0)
#define UILOBBYANIMATION_PICKRANDOM_OFFSET UNITYSDK_OFFSET(0x2682D70)
#define UILOBBYANIMATION__ONOPENED_B__12_2_OFFSET UNITYSDK_OFFSET(0x2683110)
#define UILOBBYANIMATION__ONOPENED_G__YIELDOPENWORK|12_0_OFFSET UNITYSDK_OFFSET(0x2683120)
#define UILOBBYANIMATION__ONOPENED_B__12_1_OFFSET UNITYSDK_OFFSET(0x26831F0)
#define UILOBBYANIMATION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x26832E0)
#define UILOBBYANIMATION_GET_IGNORESETPANELDEPTH_OFFSET UNITYSDK_OFFSET(0x2683370)

	inline static constexpr unsigned int UILobbyAnimation_TypeDefinitionIndex = 6753;

	class UILobbyAnimation : public Il2CppObject
	{
	public:
		UILobbyAnimationElement* defaultLobbyAnimation; // 0xD8
		UILobbyAnimationElement* targetLobbyAnimation; // 0xE0
		::System::String* targetLobbyPath; // 0xE8
		::System::Int64 workSpineId; // 0xF0
		::System::String* defaultLobbyAniPath; // 0xF8
		::MX::Core::Math::IRandomService* _pseudoRandom_k__BackingField; // 0x100

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::IRandomService* get_pseudoRandom()
		{
			return ((::MX::Core::Math::IRandomService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATION_GET_PSEUDORANDOM_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATION___N__0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CloseAni()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATION_CLOSEANI_OFFSET))(nullptr);
		}

		Il2CppObject* PickRandom()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATION_PICKRANDOM_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_b__12_2(UIWork* arg)
		{
			((::System::Void(*)(UIWork*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATION__ONOPENED_B__12_2_OFFSET))(arg, nullptr);
		}

		::System::Void _OnOpened_g__YieldOpenWork|12_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATION__ONOPENED_G__YIELDOPENWORK|12_0_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_b__12_1(UIWork* arg)
		{
			((::System::Void(*)(UIWork*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATION__ONOPENED_B__12_1_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATION_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreSetPanelDepth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYANIMATION_GET_IGNORESETPANELDEPTH_OFFSET))(nullptr);
		}

	};

