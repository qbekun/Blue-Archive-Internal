#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class NXPatchFileState; }

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXPatchFileState_TypeDefinitionIndex = 37547;

	class NXPatchFileState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Nexon::Pub::NXPatchFileState* NXPatchFileStateReadyToDownload; // 0x0
		::Nexon::Pub::NXPatchFileState* NXPatchFileStateDownloading; // 0x0
		::Nexon::Pub::NXPatchFileState* NXPatchFileStatePaused; // 0x0
		::Nexon::Pub::NXPatchFileState* NXPatchFileStateCompleted; // 0x0
		::Nexon::Pub::NXPatchFileState* NXPatchFileStateBdiffInvalidated; // 0x0
		::Nexon::Pub::NXPatchFileState* NXPatchFileStateNeedRetry; // 0x0

	};
}

