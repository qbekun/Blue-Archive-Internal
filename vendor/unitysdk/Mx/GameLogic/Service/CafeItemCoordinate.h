#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_GET_POSITIONX_OFFSET UNITYSDK_OFFSET(0xF598F0)
#define MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xF59900)
#define MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF59910)
#define MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_GET_POSITIONY_OFFSET UNITYSDK_OFFSET(0xF59920)
#define MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_SET_POSITIONX_OFFSET UNITYSDK_OFFSET(0xF59930)
#define MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_SET_POSITIONY_OFFSET UNITYSDK_OFFSET(0xF59940)
#define MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xF59950)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int CafeItemCoordinate_TypeDefinitionIndex = 12236;

	class CafeItemCoordinate : public Il2CppObject
	{
	public:
		::System::Single _PositionX_k__BackingField; // 0x10
		::System::Single _PositionY_k__BackingField; // 0x14
		::System::Single _Rotation_k__BackingField; // 0x18

		::System::Single get_PositionX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_GET_POSITIONX_OFFSET))(nullptr);
		}

		::System::Void set_Rotation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_PositionY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_GET_POSITIONY_OFFSET))(nullptr);
		}

		::System::Void set_PositionX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_SET_POSITIONX_OFFSET))(arg, nullptr);
		}

		::System::Void set_PositionY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_SET_POSITIONY_OFFSET))(arg, nullptr);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAFEITEMCOORDINATE_GET_ROTATION_OFFSET))(nullptr);
		}

	};
}

