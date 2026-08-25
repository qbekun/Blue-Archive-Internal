#pragma once
#include "../../unitysdk.h"

namespace MXField::Directing { class FieldPlayerLocation; }

#define MXFIELD_DIRECTING_IPLAYERLOCATOR_SET_PLAYERLOCATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_DIRECTING_IPLAYERLOCATOR_GET_PLAYERLOCATION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Directing
{
	inline static constexpr unsigned int IPlayerLocator_TypeDefinitionIndex = 10913;

	class IPlayerLocator : public Il2CppObject
	{
	public:
		::System::Void set_PlayerLocation(::MXField::Directing::FieldPlayerLocation* arg)
		{
			((::System::Void(*)(::MXField::Directing::FieldPlayerLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_IPLAYERLOCATOR_SET_PLAYERLOCATION_OFFSET))(arg, nullptr);
		}

		::MXField::Directing::FieldPlayerLocation* get_PlayerLocation()
		{
			return ((::MXField::Directing::FieldPlayerLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_IPLAYERLOCATOR_GET_PLAYERLOCATION_OFFSET))(nullptr);
		}

	};
}

