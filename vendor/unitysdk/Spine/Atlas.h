#pragma once
#include "../unitysdk.h"

namespace Spine { class TextureLoader; }
namespace Spine { class AtlasRegion; }

#define SPINE_ATLAS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x95A2EF0)
#define SPINE_ATLAS_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x95A2F70)
#define SPINE_ATLAS_GET_REGIONS_OFFSET UNITYSDK_OFFSET(0x95A2FF0)
#define SPINE_ATLAS_GET_PAGES_OFFSET UNITYSDK_OFFSET(0x95A3000)
#define SPINE_ATLAS_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A3010)
#define SPINE_ATLAS_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A31D0)
#define SPINE_ATLAS_READENTRY_OFFSET UNITYSDK_OFFSET(0x95A4430)
#define SPINE_ATLAS_FLIPV_OFFSET UNITYSDK_OFFSET(0x95A47D0)
#define SPINE_ATLAS_FINDREGION_OFFSET UNITYSDK_OFFSET(0x95A4880)
#define SPINE_ATLAS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95A4940)

namespace Spine
{
	inline static constexpr unsigned int Atlas_TypeDefinitionIndex = 35007;

	class Atlas : public Il2CppObject
	{
	public:
		Il2CppObject* pages; // 0x10
		Il2CppObject* regions; // 0x18
		::Spine::TextureLoader* textureLoader; // 0x20

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Regions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_GET_REGIONS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Pages()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_GET_PAGES_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::String* str, ::Spine::TextureLoader* arg)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::String*, ::Spine::TextureLoader*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Int32 ReadEntry(::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_READENTRY_OFFSET))(arg, str, nullptr);
		}

		::System::Void FlipV()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_FLIPV_OFFSET))(nullptr);
		}

		::Spine::AtlasRegion* FindRegion(::System::String* str)
		{
			return (return (::Spine::AtlasRegion*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_FINDREGION_OFFSET))(str, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLAS_DISPOSE_OFFSET))(nullptr);
		}

	};
}

