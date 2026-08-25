#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class EDownloadableContentsDataSource; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int EDownloadableContentsDataSource_TypeDefinitionIndex = 25997;

	class EDownloadableContentsDataSource : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::EDownloadableContentsDataSource* Undefined; // 0x0
		::NPA::Ex::Steam::EDownloadableContentsDataSource* AppDetail; // 0x0
		::NPA::Ex::Steam::EDownloadableContentsDataSource* ApiGroup; // 0x0

	};
}

