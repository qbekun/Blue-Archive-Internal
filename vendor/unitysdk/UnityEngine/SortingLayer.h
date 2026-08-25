#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SORTINGLAYER_GET_ID_OFFSET UNITYSDK_OFFSET(0xA1E1D30)
#define UNITYENGINE_SORTINGLAYER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA1E1D40)
#define UNITYENGINE_SORTINGLAYER_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xA1E1DB0)
#define UNITYENGINE_SORTINGLAYER_GETSORTINGLAYERIDSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1E1E70)
#define UNITYENGINE_SORTINGLAYER_GETLAYERVALUEFROMID_OFFSET UNITYSDK_OFFSET(0xA1E1D70)
#define UNITYENGINE_SORTINGLAYER_IDTONAME_OFFSET UNITYSDK_OFFSET(0xA1E1EB0)

namespace UnityEngine
{
	inline static constexpr unsigned int SortingLayer_TypeDefinitionIndex = 30940;

	class SortingLayer : public Il2CppObject
	{
	public:
		::System::Int32 m_Id; // 0x10

		::System::Int32 get_id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SORTINGLAYER_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 get_value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SORTINGLAYER_GET_VALUE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_layers()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SORTINGLAYER_GET_LAYERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSortingLayerIDsInternal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SORTINGLAYER_GETSORTINGLAYERIDSINTERNAL_OFFSET))(nullptr);
		}

		::System::Int32 GetLayerValueFromID(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SORTINGLAYER_GETLAYERVALUEFROMID_OFFSET))(arg, nullptr);
		}

		::System::String* IDToName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SORTINGLAYER_IDTONAME_OFFSET))(arg, nullptr);
		}

	};
}

