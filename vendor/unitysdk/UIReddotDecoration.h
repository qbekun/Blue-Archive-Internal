#pragma once
#include "unitysdk.h"

class LayerButtonType;
class UISprite;
class GetReddotDelegate;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIREDDOTDECORATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x2702940)
#define UIREDDOTDECORATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2703670)
#define UIREDDOTDECORATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x27038F0)
#define UIREDDOTDECORATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2703400)
#define UIREDDOTDECORATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2703B20)
#define UIREDDOTDECORATION_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x2703680)
#define UIREDDOTDECORATION_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2703E40)
#define UIREDDOTDECORATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2703EB0)

	inline static constexpr unsigned int UIReddotDecoration_TypeDefinitionIndex = 7087;

	class UIReddotDecoration : public Il2CppObject
	{
	public:
		LayerButtonType* targetButtonType; // 0x18
		UISprite* reddotSprite; // 0x20
		Il2CppObject* getReddotHandlerList; // 0x28
		Il2CppObject* messageTypeList; // 0x30

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREDDOTDECORATION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREDDOTDECORATION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREDDOTDECORATION_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIREDDOTDECORATION_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(GetReddotDelegate* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(GetReddotDelegate*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIREDDOTDECORATION_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetReddot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREDDOTDECORATION_SETREDDOT_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIREDDOTDECORATION_HANDLEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREDDOTDECORATION_.CTOR_OFFSET))(nullptr);
		}

	};

