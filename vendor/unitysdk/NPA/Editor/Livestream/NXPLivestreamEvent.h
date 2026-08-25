#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_LIVESTREAM_NXPLIVESTREAMEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C38110)

namespace NPA::Editor::Livestream
{
	inline static constexpr unsigned int NXPLivestreamEvent_TypeDefinitionIndex = 26781;

	class NXPLivestreamEvent : public ::NPA::NXPToyInitCartResult
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_LIVESTREAM_NXPLIVESTREAMEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

