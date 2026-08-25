#pragma once
#include "unitysdk.h"

#define PLAYABLECHAIN_ISVALID_OFFSET UNITYSDK_OFFSET(0x9E26C60)

	inline static constexpr unsigned int PlayableChain_TypeDefinitionIndex = 37175;

	class PlayableChain : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::System::Object*>* playables; // 0x18

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYABLECHAIN_ISVALID_OFFSET))(nullptr);
		}

	};

