#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CAMERADBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19FD970)
#define MX_DATA_EXCEL_CAMERADBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19FD980)
#define MX_DATA_EXCEL_CAMERADBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19FD990)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CameraDBSchema_TypeDefinitionIndex = 16862;

	class CameraDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERADBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERADBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERADBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

