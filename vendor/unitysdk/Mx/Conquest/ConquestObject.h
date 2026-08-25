#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MX::Campaign { class HexLocation; }
namespace MX::Data::Excel { class ConquestObjectExcel; }

#define MX_CONQUEST_CONQUESTOBJECT_GET_CONQUESTOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1425480)
#define MX_CONQUEST_CONQUESTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14255E0)
#define MX_CONQUEST_CONQUESTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14255F0)
#define MX_CONQUEST_CONQUESTOBJECT_SETEXCEL_OFFSET UNITYSDK_OFFSET(0x1425690)

namespace MX::Conquest
{
	inline static constexpr unsigned int ConquestObject_TypeDefinitionIndex = 14830;

	class ConquestObject : public Il2CppObject
	{
	public:
		::System::Int64 EntityId; // 0x10
		::UnityEngine::Vector3* Rotate; // 0x18
		::System::Int64 ConquestObjectId; // 0x28
		::MX::Campaign::HexLocation* Location; // 0x30
		Il2CppObject* _conquestObjectExcel; // 0x40

		::MX::Data::Excel::ConquestObjectExcel* get_ConquestObjectExcel()
		{
			return ((::MX::Data::Excel::ConquestObjectExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTOBJECT_GET_CONQUESTOBJECTEXCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ConquestObjectExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestObjectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetExcel(::MX::Data::Excel::ConquestObjectExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestObjectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTOBJECT_SETEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

