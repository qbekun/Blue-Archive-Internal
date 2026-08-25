#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class EmblemInfo&; }

#define MX_DATA_EMBLEMDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18B9900)
#define MX_DATA_EMBLEMDATA_SET_DEFAULTEMBLEMIDS_OFFSET UNITYSDK_OFFSET(0x18B9960)
#define MX_DATA_EMBLEMDATA_GET_EMBLEMEXCELS_OFFSET UNITYSDK_OFFSET(0x18B9970)
#define MX_DATA_EMBLEMDATA_GET_DEFAULTEMBLEMIDS_OFFSET UNITYSDK_OFFSET(0x18B9980)
#define MX_DATA_EMBLEMDATA_GET_FAVOREMBLEMDICT_OFFSET UNITYSDK_OFFSET(0x18B9990)
#define MX_DATA_EMBLEMDATA_TRYGETCHECKPASSTYPES_OFFSET UNITYSDK_OFFSET(0x18B99A0)
#define MX_DATA_EMBLEMDATA_SET_STORYEMBLEMIDS_OFFSET UNITYSDK_OFFSET(0x18B9BF0)
#define MX_DATA_EMBLEMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18B9C00)
#define MX_DATA_EMBLEMDATA_PREPAREINITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x18B9DA0)
#define MX_DATA_EMBLEMDATA_GETEMBLEMCATEGORIES_OFFSET UNITYSDK_OFFSET(0x18BA3B0)
#define MX_DATA_EMBLEMDATA_SET_FAVOREMBLEMDICT_OFFSET UNITYSDK_OFFSET(0x18BA440)
#define MX_DATA_EMBLEMDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18BA450)
#define MX_DATA_EMBLEMDATA_GET_STORYEMBLEMIDS_OFFSET UNITYSDK_OFFSET(0x18BA4B0)
#define MX_DATA_EMBLEMDATA_GET_EMBLEMINFOS_OFFSET UNITYSDK_OFFSET(0x18BA4C0)

namespace MX::Data
{
	inline static constexpr unsigned int EmblemData_TypeDefinitionIndex = 16058;

	class EmblemData : public Il2CppObject
	{
	public:
		Il2CppObject* emblemExcels; // 0x28
		Il2CppObject* emblemDict; // 0x30
		Il2CppObject* _DefaultEmblemIds_k__BackingField; // 0x38
		Il2CppObject* _FavorEmblemDict_k__BackingField; // 0x40
		Il2CppObject* _StoryEmblemIds_k__BackingField; // 0x48

		::System::Boolean TryGetValue(::System::Int64 arg, ::MX::Data::EmblemInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::EmblemInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_DefaultEmblemIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_SET_DEFAULTEMBLEMIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EmblemExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_GET_EMBLEMEXCELS_OFFSET))(nullptr);
		}

		Il2CppObject* get_DefaultEmblemIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_GET_DEFAULTEMBLEMIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_FavorEmblemDict()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_GET_FAVOREMBLEMDICT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetCheckPassTypes(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_TRYGETCHECKPASSTYPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_StoryEmblemIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_SET_STORYEMBLEMIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PrepareInitializeData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_PREPAREINITIALIZEDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetEmblemCategories()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_GETEMBLEMCATEGORIES_OFFSET))(nullptr);
		}

		::System::Void set_FavorEmblemDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_SET_FAVOREMBLEMDICT_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* get_StoryEmblemIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_GET_STORYEMBLEMIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_EmblemInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EMBLEMDATA_GET_EMBLEMINFOS_OFFSET))(nullptr);
		}

	};
}

