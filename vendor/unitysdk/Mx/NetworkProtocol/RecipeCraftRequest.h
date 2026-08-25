#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RECIPECRAFTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D620)
#define MX_NETWORKPROTOCOL_RECIPECRAFTREQUEST_GET_RECIPECRAFTUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4D630)
#define MX_NETWORKPROTOCOL_RECIPECRAFTREQUEST_SET_RECIPEINGREDIENTUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4D640)
#define MX_NETWORKPROTOCOL_RECIPECRAFTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D650)
#define MX_NETWORKPROTOCOL_RECIPECRAFTREQUEST_SET_RECIPECRAFTUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4D660)
#define MX_NETWORKPROTOCOL_RECIPECRAFTREQUEST_GET_RECIPEINGREDIENTUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4D670)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RecipeCraftRequest_TypeDefinitionIndex = 12053;

	class RecipeCraftRequest : public Il2CppObject
	{
	public:
		::System::Int64 _RecipeCraftUniqueId_k__BackingField; // 0x40
		::System::Int64 _RecipeIngredientUniqueId_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_RecipeCraftUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTREQUEST_GET_RECIPECRAFTUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_RecipeIngredientUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTREQUEST_SET_RECIPEINGREDIENTUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_RecipeCraftUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTREQUEST_SET_RECIPECRAFTUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RecipeIngredientUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECIPECRAFTREQUEST_GET_RECIPEINGREDIENTUNIQUEID_OFFSET))(nullptr);
		}

	};
}

