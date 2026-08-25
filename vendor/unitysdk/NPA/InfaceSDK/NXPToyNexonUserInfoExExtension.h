#pragma once
#include "../../unitysdk.h"

namespace NPA::InfaceSDK { class NXPToyNexonUserInfoEx; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_INFACESDK_NXPTOYNEXONUSERINFOEXEXTENSION_CREATEFROMJSON_OFFSET UNITYSDK_OFFSET(0x9CE7110)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPToyNexonUserInfoExExtension_TypeDefinitionIndex = 25787;

	class NXPToyNexonUserInfoExExtension : public Il2CppObject
	{
	public:
		::NPA::InfaceSDK::NXPToyNexonUserInfoEx* CreateFromJson(::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::NPA::InfaceSDK::NXPToyNexonUserInfoEx*(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPTOYNEXONUSERINFOEXEXTENSION_CREATEFROMJSON_OFFSET))(arg, nullptr);
		}

	};
}

