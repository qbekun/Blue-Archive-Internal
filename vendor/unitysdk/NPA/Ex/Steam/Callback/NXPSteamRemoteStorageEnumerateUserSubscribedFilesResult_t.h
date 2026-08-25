#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamResult; }

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamRemoteStorageEnumerateUserSubscribedFilesResult_t_TypeDefinitionIndex = 26105;

	class NXPSteamRemoteStorageEnumerateUserSubscribedFilesResult_t : public Il2CppObject
	{
	public:
		::System::Int32 k_iCallback; // 0x0
		::NPA::Ex::Steam::ENXPSteamResult* m_eResult; // 0x10
		::System::Int32 m_nResultsReturned; // 0x14
		::System::Int32 m_nTotalResultCount; // 0x18
		::Il2CppArray<::System::Object*>* m_rgPublishedFileId; // 0x20
		::Il2CppArray<::System::Object*>* m_rgRTimeSubscribed; // 0x28

	};
}

