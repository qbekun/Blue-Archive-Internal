#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class GroundObstacleData; }

#define MX_DATA_GROUNDOBSTACLEDATAHASHCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x184CF30)
#define MX_DATA_GROUNDOBSTACLEDATAHASHCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x184CF90)
#define MX_DATA_GROUNDOBSTACLEDATAHASHCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x184CFC0)
#define MX_DATA_GROUNDOBSTACLEDATAHASHCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x184D020)
#define MX_DATA_GROUNDOBSTACLEDATAHASHCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x184D1E0)

namespace MX::Data
{
	inline static constexpr unsigned int GroundObstacleDataHashComparer_TypeDefinitionIndex = 15837;

	class GroundObstacleDataHashComparer : public Il2CppObject
	{
	public:
		::System::Boolean Equals(::MX::Data::GroundObstacleData* arg, ::MX::Data::GroundObstacleData* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::GroundObstacleData*, ::MX::Data::GroundObstacleData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATAHASHCOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(::MX::Data::GroundObstacleData* arg)
		{
			return (return (::System::Int32(*)(::MX::Data::GroundObstacleData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATAHASHCOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Compare(::MX::Data::GroundObstacleData* arg, ::MX::Data::GroundObstacleData* arg)
		{
			return (return (::System::Int32(*)(::MX::Data::GroundObstacleData*, ::MX::Data::GroundObstacleData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATAHASHCOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATAHASHCOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATAHASHCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};
}

