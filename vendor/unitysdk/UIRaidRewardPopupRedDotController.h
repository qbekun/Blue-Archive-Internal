#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace FlatData { class ContentType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIRAIDREWARDPOPUPREDDOTCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27A11E0)
#define UIRAIDREWARDPOPUPREDDOTCONTROLLER_SETLIMITEDREDDOT_OFFSET UNITYSDK_OFFSET(0x27A98D0)
#define UIRAIDREWARDPOPUPREDDOTCONTROLLER_SETPOINTREDDOT_OFFSET UNITYSDK_OFFSET(0x27A9790)
#define UIRAIDREWARDPOPUPREDDOTCONTROLLER_SETRANKREDDOT_OFFSET UNITYSDK_OFFSET(0x27A9690)
#define UIRAIDREWARDPOPUPREDDOTCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27A99D0)
#define UIRAIDREWARDPOPUPREDDOTCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27A9CA0)
#define UIRAIDREWARDPOPUPREDDOTCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27A9FF0)
#define UIRAIDREWARDPOPUPREDDOTCONTROLLER_HANDLERAIDREDDOT_OFFSET UNITYSDK_OFFSET(0x27AA000)

	inline static constexpr unsigned int UIRaidRewardPopupRedDotController_TypeDefinitionIndex = 7495;

	class UIRaidRewardPopupRedDotController : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* rankRedDot; // 0x18
		::UnityEngine::GameObject* pointRedDot; // 0x20
		::UnityEngine::GameObject* limitedRedDot; // 0x28
		::FlatData::ContentType* currentRaidType; // 0x30

		::System::Void Initialize(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREWARDPOPUPREDDOTCONTROLLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetLimitedRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREWARDPOPUPREDDOTCONTROLLER_SETLIMITEDREDDOT_OFFSET))(nullptr);
		}

		::System::Void SetPointRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREWARDPOPUPREDDOTCONTROLLER_SETPOINTREDDOT_OFFSET))(nullptr);
		}

		::System::Void SetRankRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREWARDPOPUPREDDOTCONTROLLER_SETRANKREDDOT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREWARDPOPUPREDDOTCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREWARDPOPUPREDDOTCONTROLLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREWARDPOPUPREDDOTCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleRaidRedDot(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREWARDPOPUPREDDOTCONTROLLER_HANDLERAIDREDDOT_OFFSET))(arg, nullptr);
		}

	};

