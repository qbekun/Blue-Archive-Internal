#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define RECIPECRAFTNETWORKTASK_GET_INGREDIENTUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F93020)
#define RECIPECRAFTNETWORKTASK__PROCESSSESSION_B__20_0_OFFSET UNITYSDK_OFFSET(0x1F93030)
#define RECIPECRAFTNETWORKTASK_GET_CRAFTUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F93040)
#define RECIPECRAFTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F93050)
#define RECIPECRAFTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F930E0)
#define RECIPECRAFTNETWORKTASK_SET_CONSUMEEQUIPS_OFFSET UNITYSDK_OFFSET(0x1F934D0)
#define RECIPECRAFTNETWORKTASK_GET_CONSUMEITEMS_OFFSET UNITYSDK_OFFSET(0x1F934E0)
#define RECIPECRAFTNETWORKTASK_GET_CONSUMEEQUIPS_OFFSET UNITYSDK_OFFSET(0x1F934F0)
#define RECIPECRAFTNETWORKTASK_SET_CRAFTUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F93500)
#define RECIPECRAFTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F93510)
#define RECIPECRAFTNETWORKTASK_SET_CONSUMECHARACTERS_OFFSET UNITYSDK_OFFSET(0x1F93520)
#define RECIPECRAFTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F93530)
#define RECIPECRAFTNETWORKTASK_GET_CONSUMECHARACTERS_OFFSET UNITYSDK_OFFSET(0x1F93540)
#define RECIPECRAFTNETWORKTASK_SET_CONSUMEITEMS_OFFSET UNITYSDK_OFFSET(0x1F93550)
#define RECIPECRAFTNETWORKTASK_SET_INGREDIENTUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F93560)

	inline static constexpr unsigned int RecipeCraftNetworkTask_TypeDefinitionIndex = 2732;

	class RecipeCraftNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _CraftUniqueId_k__BackingField; // 0x40
		::System::Int64 _IngredientUniqueId_k__BackingField; // 0x48
		Il2CppObject* _ConsumeCharacters_k__BackingField; // 0x50
		Il2CppObject* _ConsumeEquips_k__BackingField; // 0x58
		Il2CppObject* _ConsumeItems_k__BackingField; // 0x60

		::System::Int64 get_IngredientUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_GET_INGREDIENTUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__20_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK__PROCESSSESSION_B__20_0_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_GET_CRAFTUNIQUEID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_ConsumeEquips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_SET_CONSUMEEQUIPS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConsumeItems()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_GET_CONSUMEITEMS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConsumeEquips()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_GET_CONSUMEEQUIPS_OFFSET))(nullptr);
		}

		::System::Void set_CraftUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_SET_CRAFTUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeCharacters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_SET_CONSUMECHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConsumeCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_GET_CONSUMECHARACTERS_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_SET_CONSUMEITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void set_IngredientUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTNETWORKTASK_SET_INGREDIENTUNIQUEID_OFFSET))(arg, nullptr);
		}

	};

