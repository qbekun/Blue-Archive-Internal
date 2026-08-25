#pragma once
#include "unitysdk.h"

#define ICHARACTERMOUTHEVENTS_SETHORIZONTALLYFLIPPEDMOUTHTILE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTERMOUTHEVENTS_SETMOUTHTILE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTERMOUTHEVENTS_SETMOUTHTILETODEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ICharacterMouthEvents_TypeDefinitionIndex = 922;

	class ICharacterMouthEvents : public Il2CppObject
	{
	public:
		::System::Void SetHorizontallyFlippedMouthTile(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTERMOUTHEVENTS_SETHORIZONTALLYFLIPPEDMOUTHTILE_OFFSET))(arg, nullptr);
		}

		::System::Void SetMouthTile(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTERMOUTHEVENTS_SETMOUTHTILE_OFFSET))(arg, nullptr);
		}

		::System::Void SetMouthTileToDefault()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTERMOUTHEVENTS_SETMOUTHTILETODEFAULT_OFFSET))(nullptr);
		}

	};

