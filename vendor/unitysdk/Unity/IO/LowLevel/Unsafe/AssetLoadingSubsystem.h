#pragma once
#include "../../../../unitysdk.h"

namespace Unity::IO::LowLevel::Unsafe { class AssetLoadingSubsystem; }

namespace Unity::IO::LowLevel::Unsafe
{
	inline static constexpr unsigned int AssetLoadingSubsystem_TypeDefinitionIndex = 30886;

	class AssetLoadingSubsystem : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem* Other; // 0x0
		::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem* Texture; // 0x0
		::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem* VirtualTexture; // 0x0
		::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem* Mesh; // 0x0
		::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem* Audio; // 0x0
		::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem* Scripts; // 0x0
		::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem* EntitiesScene; // 0x0
		::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem* EntitiesStreamBinaryReader; // 0x0
		::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem* FileInfo; // 0x0

	};
}

