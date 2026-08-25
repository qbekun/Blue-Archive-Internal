#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class EDownloadableContentsDataState; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int EDownloadableContentsDataState_TypeDefinitionIndex = 25996;

	class EDownloadableContentsDataState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::EDownloadableContentsDataState* NotIssued; // 0x0
		::NPA::Ex::Steam::EDownloadableContentsDataState* Success; // 0x0
		::NPA::Ex::Steam::EDownloadableContentsDataState* WorkInProgress; // 0x0
		::NPA::Ex::Steam::EDownloadableContentsDataState* Failed; // 0x0

	};
}

