#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CameraExcel&; }

#define MX_DATA_CAMERADATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1881EF0)
#define MX_DATA_CAMERADATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x1882010)
#define MX_DATA_CAMERADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1882050)

namespace MX::Data
{
	inline static constexpr unsigned int CameraData_TypeDefinitionIndex = 15983;

	class CameraData : public Il2CppObject
	{
	public:
		Il2CppObject* cache; // 0x28

		::System::Boolean TryGetValue(::System::Int64 arg, ::MX::Data::Excel::CameraExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CameraExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMERADATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMERADATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMERADATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

