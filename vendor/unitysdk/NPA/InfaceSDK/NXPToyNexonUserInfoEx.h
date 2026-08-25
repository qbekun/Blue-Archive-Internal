#pragma once
#include "../../unitysdk.h"

namespace NPA::InfaceSDK { class NXPToyNexonUserInfoEx; }

#define NPA_INFACESDK_NXPTOYNEXONUSERINFOEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CE63D0)
#define NPA_INFACESDK_NXPTOYNEXONUSERINFOEX_WRITETOJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x9CE6450)
#define NPA_INFACESDK_NXPTOYNEXONUSERINFOEX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CE70C0)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPToyNexonUserInfoEx_TypeDefinitionIndex = 25786;

	class NXPToyNexonUserInfoEx : public Il2CppObject
	{
	public:
		::System::Int32 nexonTpaMemType; // 0x70
		::System::String* tpaCode; // 0x78
		::System::Boolean isRequestSecede; // 0x80
		::System::Boolean isInactive; // 0x81
		::System::Boolean isAdminBlock; // 0x82
		::System::Boolean isNeedEmailIDVerify; // 0x83

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPTOYNEXONUSERINFOEX_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void WriteToJsonObject(::NPA::InfaceSDK::NXPToyNexonUserInfoEx* arg, ::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::NXPToyNexonUserInfoEx*, ::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPTOYNEXONUSERINFOEX_WRITETOJSONOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPTOYNEXONUSERINFOEX_.CTOR_OFFSET))(nullptr);
		}

	};
}

