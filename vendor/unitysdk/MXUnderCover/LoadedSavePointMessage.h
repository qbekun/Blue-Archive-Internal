#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_LOADEDSAVEPOINTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB1B80)

namespace MXUnderCover
{
	inline static constexpr unsigned int LoadedSavePointMessage_TypeDefinitionIndex = 9948;

	class LoadedSavePointMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_LOADEDSAVEPOINTMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

