#pragma once
#include "unitysdk.h"

class AssetObjectBase;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICHARACTERGROWTH_ESTIMATIONBASE_SETDATA_OFFSET UNITYSDK_OFFSET(0x22D88F0)
#define UICHARACTERGROWTH_ESTIMATIONBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22D8900)
#define UICHARACTERGROWTH_ESTIMATIONBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22D8A90)
#define UICHARACTERGROWTH_ESTIMATIONBASE_ISCANREQUESTPACKET_OFFSET UNITYSDK_OFFSET(0x22D8B90)
#define UICHARACTERGROWTH_ESTIMATIONBASE_HANDLECLICKCHARACTERCARDMESSAGE_OFFSET UNITYSDK_OFFSET(0x22D8DA0)
#define UICHARACTERGROWTH_ESTIMATIONBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22D8DB0)
#define UICHARACTERGROWTH_ESTIMATIONBASE_GETINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x22D8E30)
#define UICHARACTERGROWTH_ESTIMATIONBASE_SETUI_OFFSET UNITYSDK_OFFSET(0x22D8E40)

	inline static constexpr unsigned int UICharacterGrowth_EstimationBase_TypeDefinitionIndex = 4843;

	class UICharacterGrowth_EstimationBase : public Il2CppObject
	{
	public:
		AssetObjectBase* AssetToGrow; // 0x18
		Il2CppObject* ingredients; // 0x20

		::System::Void SetData(AssetObjectBase* arg)
		{
			((::System::Void(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_ESTIMATIONBASE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_ESTIMATIONBASE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_ESTIMATIONBASE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean IsCanRequestPacket(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_ESTIMATIONBASE_ISCANREQUESTPACKET_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleClickCharacterCardMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_ESTIMATIONBASE_HANDLECLICKCHARACTERCARDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_ESTIMATIONBASE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetIngredients()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_ESTIMATIONBASE_GETINGREDIENTS_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_ESTIMATIONBASE_SETUI_OFFSET))(nullptr);
		}

	};

